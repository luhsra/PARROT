#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task4Subtask3);
DeclareTask(CPU0Task4Subtask14);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask4);
DeclareTask(CPU2Task1Subtask5);
DeclareTask(CPU3Task2Subtask7);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask8);
DeclareTask(CPU4Task0Subtask10);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task3Subtask9);
DeclareTask(CPU5Task3Subtask12);
DeclareTask(CPU5Task3Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task4Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 17); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 14); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 140); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 98); // 0
  ActivateTask(CPU0Task4Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 23); // 0
  ActivateTask(CPU1Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 35); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 57); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 30); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 25); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 20); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 22); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 26); // 0
  ActivateTask(CPU2Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask5.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 192); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 176); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 17); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 150); // 0
  ActivateTask(CPU4Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 161); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 142); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 177); // 0
  ActivateTask(CPU4Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 119); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 19); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 155); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 34); // 0
  ActivateTask(CPU5Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 90); // 0
  ActivateTask(CPU5Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 168); // 0
  TerminateTask();

}
