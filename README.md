# git
一、异常类学习
DefineTryException
public class DefineTryException extends Exception {
   DefineTryException(String name){
       super(name);
   }
}

1、ExceptionTypeTest
public class ExceptionTypeTest {
    public void testRuntimeException() throws RuntimeException {
        throw new RuntimeException("test exception");
    }

    public void testException() throws Exception {
        System.out.println("test exception");
    }

    public void testDefineTryException() throws DefineTryException {
        throw new DefineTryException("test DefineTryException");
    }

    public void testContinueThrows() throws DefineTryException {
        new DefineTryException("test DefineTryException");
    }
}

/**
 * 异常类的出路
 * 检查时异常:如果不处理，程序就不能编译通过。如IOException、SQLException等以及用户自定义的Exception异常
 * 运行时异常:untimeException类及其子类异常，如NullPointerException(空指针异常)、IndexOutOfBoundsException(下标越界异常)等，
 * 这些异常是非检查异常，程序中可以选择捕获处理，也可以不处理
 *
 */
public class TestTry {
    public static void main(String[] args) {
        TestTry testTry = new TestTry();

        ExceptionTypeTest ett = new ExceptionTypeTest();
        //1、测试运行时异常也就是运行时异常，可以不作处理(不出错的前提下）、继续抛出、try三个都可以
        try {
            ett.testRuntimeException();
        } catch (RuntimeException e) {
            e.printStackTrace();
        }
        // ett.testRuntimeException();//不做处理

        //2、测试检查异常,可以继续抛出、try
        try {
            ett.testException();
        } catch (Exception e) {
            e.printStackTrace();
        }

        //3、测试自定义异常,可以继续抛出、try
        try {
            ett.testDefineTryException();
        } catch (DefineTryException e) {
            e.printStackTrace();
        }

        //4、异常继续抛出后 第二次接住
        try {
            ett.testContinueThrows();
        } catch (DefineTryException e) {
            e.printStackTrace();
        }

        System.out.println("hello");

        TestTry testTry1 = new TestTry();
        TestClass testClass = new TestClass();
        testTry1.testRunTimeException(testClass.nums);
    }

    public void testRunTimeException(int[] nums) {
        System.out.println(nums[5]);
    }

}
