#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask4);
DeclareTask(CPU0Task3Subtask6);
DeclareTask(CPU0Task3Subtask9);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask14);
DeclareTask(CPU2Task2Subtask5);
DeclareTask(CPU2Task2Subtask7);
DeclareTask(CPU2Task2Subtask10);
DeclareTask(CPU3Task5Subtask0);
DeclareTask(CPU3Task5Subtask11);
DeclareTask(CPU3Task5Subtask12);
DeclareTask(CPU4Task1Subtask2);
DeclareTask(CPU4Task1Subtask3);
DeclareTask(CPU5Task4Subtask1);
DeclareTask(CPU5Task4Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 44); // 0
  ActivateTask(CPU0Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 108); // 0
  ActivateTask(CPU0Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 6); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 194); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 138); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 190); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 15); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 90); // 0
  ActivateTask(CPU2Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 177); // 0
  ActivateTask(CPU2Task2Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 137); // 0
  ActivateTask(CPU3Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 157); // 0
  ActivateTask(CPU3Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 129); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 186); // 0
  ActivateTask(CPU5Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 92); // 0
  TerminateTask();

}
