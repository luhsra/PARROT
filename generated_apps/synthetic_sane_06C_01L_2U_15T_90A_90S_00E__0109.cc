#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task2Subtask3);
DeclareTask(CPU0Task2Subtask14);
DeclareTask(CPU1Task5Subtask2);
DeclareTask(CPU1Task5Subtask5);
DeclareTask(CPU1Task5Subtask12);
DeclareTask(CPU2Task0Subtask0);
DeclareTask(CPU2Task0Subtask1);
DeclareTask(CPU2Task0Subtask4);
DeclareTask(CPU2Task0Subtask13);
DeclareTask(CPU3Task3Subtask8);
DeclareTask(CPU3Task3Subtask10);
DeclareTask(CPU4Task1Subtask7);
DeclareTask(CPU4Task1Subtask9);
DeclareTask(CPU5Task4Subtask6);
DeclareTask(CPU5Task4Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 115); // 0
  ActivateTask(CPU0Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 8); // 0
  ActivateTask(CPU1Task5Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 83); // 0
  ActivateTask(CPU1Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 176); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 176); // 0
  ActivateTask(CPU2Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 186); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 128); // 0
  ActivateTask(CPU2Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 34); // 0
  ActivateTask(CPU2Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 52); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 155); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 119); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 138); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 138); // 0
  ActivateTask(CPU3Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 127); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 146); // 0
  ActivateTask(CPU5Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 165); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 114); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 20); // 0
  ActivateTask(CPU4Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 178); // 0
  TerminateTask();

}
