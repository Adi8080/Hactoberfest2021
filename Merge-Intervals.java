
import java.util.ArrayList;

public class Intervals {
	int start,last;
	Intervals(){
		start=0;
		last=0;
	}
public class mergeIntervals{
	public ArrayList <Intervals> insert(ArrayList<Intervals> interval,Intervals newInterval){
		if(interval== null) {
			interval = new ArrayList<Intervals>();
			interval.add(newInterval);
			return interval;
		}
		else if(interval.size()==0) {
			interval.add(newInterval);
			return interval;
		}
		Intervals toInsert =newInterval;
		int i=0;
		while(i<interval.size()) {
			Intervals current = interval.get(i);
			if(current.last<toInsert.start) i++;
			else if(toInsert.last<current.start) {
				interval.add(i,toInsert);
				break;
			}
			else {
			toInsert.start=Math.min(toInsert.start, current.start);
			toInsert.start=Math.max(toInsert.last, current.last);
			interval.remove(i);
			}
		}
		if(i==interval.size()) {
			interval.add(toInsert);
		}
		return null;
	}
}

}
