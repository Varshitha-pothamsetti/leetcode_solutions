# Last updated: 01/03/2026, 20:19:10
class Solution(object):
    def checkTwoChessboards(self, coordinate1, coordinate2):
        """
        :type coordinate1: str
        :type coordinate2: str
        :rtype: bool
        """
        def convert_coordinate(coordinate):
            file = ord(coordinate[0]) - ord('a') + 1
            rank = int(coordinate[1])
            if not (1 <= file <= 8 and 1 <= rank <= 8):
                raise valueError("coordinate is out of bounds")
            return file, rank
        
        x1, y1 = convert_coordinate(coordinate1)
        x2, y2 = convert_coordinate(coordinate2)
        
        return (x1 + y1) % 2 == (x2 + y2) % 2
        
        