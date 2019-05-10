import java.lang.String;
import java.util.HashMap;

class JumpToSourceDemo {

    public static boolean checkParam(String checkKey, Params parameters){
        return parameters.hasParameter(checkKey);
    }

    class Params {

        public HashMap<String, String> myParameters;

        public Params() {
            myParameters = new HashMap<String, String>();
        }

        public Params(HashMap<String, String> myParameters) {
            this.myParameters = myParameters;
        }

        public void addParameter(String key, String value) {
            myParameters.put(key, value);
        }

        public String getParameter(String key) {
            return myParameters.get(key);
        }

        public boolean hasParameter(String key) {
            return myParameters.containsKey(key);
        }

    }
}