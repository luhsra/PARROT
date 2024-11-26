#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask1);
DeclareTask(CPU0Task3Subtask2);
DeclareTask(CPU0Task3Subtask4);
DeclareTask(CPU0Task3Subtask6);
DeclareTask(CPU1Task1Subtask8);
DeclareTask(CPU1Task1Subtask9);
DeclareTask(CPU1Task1Subtask14);
DeclareTask(CPU2Task2Subtask11);
DeclareTask(CPU2Task2Subtask12);
DeclareTask(CPU3Task0Subtask0);
DeclareTask(CPU3Task0Subtask7);
DeclareTask(CPU4Task4Subtask13);
DeclareTask(CPU5Task5Subtask3);
DeclareTask(CPU5Task5Subtask5);
DeclareTask(CPU5Task5Subtask10);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 183); // 0
  ActivateTask(CPU0Task3Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 83); // 0
  ActivateTask(CPU0Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 54); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 91); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 52); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 41); // 0
  ActivateTask(CPU1Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 23); // 0
  ActivateTask(CPU1Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 133); // 0
  ActivateTask(CPU2Task2Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 145); // 0
  ActivateTask(CPU3Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task0Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 115); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 196); // 0
  ActivateTask(CPU0Task3Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 18); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 161); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 123); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 129); // 0
  ActivateTask(CPU5Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 23); // 0
  ActivateTask(CPU5Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask3.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 125); // 0
  TerminateTask();

}
