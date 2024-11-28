#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task2Subtask8);
DeclareTask(CPU1Task4Subtask4);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task4Subtask10);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU2Task1Subtask11);
DeclareTask(CPU2Task1Subtask12);
DeclareTask(CPU3Task0Subtask2);
DeclareTask(CPU3Task0Subtask9);
DeclareTask(CPU3Task0Subtask14);
DeclareTask(CPU4Task5Subtask1);
DeclareTask(CPU4Task5Subtask3);
DeclareTask(CPU4Task5Subtask13);
DeclareTask(CPU5Task3Subtask0);
DeclareTask(CPU5Task3Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 191); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 75); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 162); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 30); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 65); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 53); // 0
  ActivateTask(CPU1Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 188); // 0
  ActivateTask(CPU2Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 65); // 0
  ActivateTask(CPU2Task1Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 156); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 78); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 188); // 0
  ActivateTask(CPU3Task0Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 172); // 0
  ActivateTask(CPU3Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 83); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 187); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 66); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 26); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 110); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask1.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 159); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 196); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 26); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 107); // 0
  ActivateTask(CPU4Task5Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 136); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 10); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 98); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 53); // 0
  TerminateTask();

}