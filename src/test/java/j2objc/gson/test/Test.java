package j2objc.gson.test;

import j2objc.gson.Gson;
import j2objc.gson.GsonBuilder;
import j2objc.gson.reflect.TypeToken;

import java.lang.reflect.Type;

public class Test {

    static class B{
        String text = "text";

        public String getText() {
            return text;
        }

        public void setText(String text) {
            this.text = text;
        }

        @Override
        public String toString() {
            return text;
        }
    }

    static class A<T>{

        T value;

        A(T value){
            this.value = value;
        }

        public T getValue() {
            return value;
        }

        public void setValue(T value) {
            this.value = value;
        }

        @Override
        public String toString() {
            return value.toString();
        }
    }

    public static void main(String[] args){

        A value = new A(new B());

        Gson builder = new GsonBuilder().create();

        String json = builder.toJson(value);

        Type typeToken = new TypeToken<A<B>>(){}.getType();


        A newValue = builder.fromJson(json, typeToken);

        System.out.println("****************");
        System.out.println(newValue);
        System.out.println("****************");


    }

}
