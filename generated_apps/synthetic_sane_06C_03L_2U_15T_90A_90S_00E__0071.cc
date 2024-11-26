#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);




DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task1Subtask13);
DeclareTask(CPU1Task5Subtask1);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask3);
DeclareTask(CPU1Task5Subtask9);
DeclareTask(CPU1Task5Subtask14);
DeclareTask(CPU2Task0Subtask5);
DeclareTask(CPU3Task3Subtask0);
DeclareTask(CPU3Task3Subtask6);
DeclareTask(CPU3Task3Subtask12);
DeclareTask(CPU4Task4Subtask7);
DeclareTask(CPU5Task2Subtask4);
DeclareTask(CPU5Task2Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 108); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 23); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 35); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 17); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 74); // 0
  ActivateTask(CPU0Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 130); // 0
  ActivateTask(CPU0Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 49); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 84); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 4); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 136); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 80); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 59); // 0
  ActivateTask(CPU1Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 41); // 0
  ActivateTask(CPU1Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 77); // 0
  ActivateTask(CPU1Task5Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 10); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 179); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 36); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 16); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 191); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 27); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask9.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 3); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 8); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  ActivateTask(CPU3Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 77); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 14); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 117); // 0
  ActivateTask(CPU1Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 112); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 114); // 0
  ActivateTask(CPU5Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task2Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 27); // 0
  TerminateTask();

}
