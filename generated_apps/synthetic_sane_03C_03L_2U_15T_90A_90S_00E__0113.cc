#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask2);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task0Subtask3);
DeclareTask(CPU1Task0Subtask7);
DeclareTask(CPU1Task4Subtask5);
DeclareTask(CPU1Task4Subtask13);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU2Task1Subtask10);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU2Task1Subtask12);
DeclareTask(CPU2Task3Subtask4);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 175); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 138); // 0
  ActivateTask(CPU1Task0Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 131); // 0
  ActivateTask(CPU0Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 161); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask2.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 191); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 65); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 180); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 174); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 23); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 51); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 111); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 174); // 0
  ActivateTask(CPU1Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 68); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 160); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 81); // 0
  ActivateTask(CPU1Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 11); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 107); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 181); // 0
  ActivateTask(CPU2Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 194); // 0
  ActivateTask(CPU2Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 23); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 39); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 5); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 166); // 0
  ActivateTask(CPU2Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 120); // 0
  TerminateTask();

}
