// Last updated: 01/03/2026, 20:19:29
var TimeLimitedCache = function() {
    // Store key -> { value, expireTime }
    this.cache = new Map();
};

/** 
 * @param {number} key
 * @param {number} value
 * @param {number} duration time until expiration in ms
 * @return {boolean} if un-expired key already existed
 */
TimeLimitedCache.prototype.set = function(key, value, duration) {
    const currentTime = Date.now();
    const expireTime = currentTime + duration;

    const exists =
        this.cache.has(key) &&
        this.cache.get(key).expireTime > currentTime;

    // Overwrite value and expiration time
    this.cache.set(key, { value, expireTime });

    return exists;
};

/** 
 * @param {number} key
 * @return {number} value associated with key
 */
TimeLimitedCache.prototype.get = function(key) {
    const currentTime = Date.now();

    if (!this.cache.has(key)) return -1;

    const entry = this.cache.get(key);

    if (entry.expireTime <= currentTime) {
        this.cache.delete(key); // remove expired key
        return -1;
    }

    return entry.value;
};

/** 
 * @return {number} count of non-expired keys
 */
TimeLimitedCache.prototype.count = function() {
    const currentTime = Date.now();
    let count = 0;

    for (const [key, entry] of this.cache) {
        if (entry.expireTime > currentTime) {
            count++;
        } else {
            this.cache.delete(key); // clean expired keys
        }
    }

    return count;
};
