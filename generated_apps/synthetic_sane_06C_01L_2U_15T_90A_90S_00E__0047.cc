#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task0Subtask5);
DeclareTask(CPU1Task0Subtask12);
DeclareTask(CPU2Task5Subtask6);
DeclareTask(CPU2Task5Subtask14);
DeclareTask(CPU3Task2Subtask0);
DeclareTask(CPU3Task2Subtask3);
DeclareTask(CPU3Task2Subtask9);
DeclareTask(CPU3Task2Subtask13);
DeclareTask(CPU4Task4Subtask1);
DeclareTask(CPU4Task4Subtask2);
DeclareTask(CPU4Task4Subtask10);
DeclareTask(CPU5Task3Subtask8);
DeclareTask(CPU5Task3Subtask11);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask8 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 14); // 0
  ActivateTask(CPU1Task0Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 7); // 0
  ActivateTask(CPU4Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 146); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 158); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 36); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 91); // 0
  ActivateTask(CPU2Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 161); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 89); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 128); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 97); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 98); // 0
  ActivateTask(CPU3Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 109); // 0
  ActivateTask(CPU3Task2Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 25); // 0
  ActivateTask(CPU3Task2Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 89); // 0
  ActivateTask(CPU4Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 132); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 93); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 122); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 117); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 83); // 0
  ActivateTask(CPU5Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 183); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 171); // 0
  TerminateTask();

}
