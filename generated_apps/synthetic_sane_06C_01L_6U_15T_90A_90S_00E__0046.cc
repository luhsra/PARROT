#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task0Subtask1);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task0Subtask11);
DeclareTask(CPU1Task2Subtask5);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU2Task1Subtask3);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU2Task1Subtask10);
DeclareTask(CPU2Task1Subtask12);
DeclareTask(CPU3Task5Subtask7);
DeclareTask(CPU4Task4Subtask0);
DeclareTask(CPU4Task4Subtask6);
DeclareTask(CPU4Task4Subtask13);
DeclareTask(CPU5Task3Subtask2);
DeclareTask(CPU5Task3Subtask4);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask4 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 134); // 0
  ActivateTask(CPU0Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 154); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 22); // 0
  ActivateTask(CPU0Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 125); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 171); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 166); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 75); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 77); // 0
  ActivateTask(CPU1Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 91); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 120); // 0
  ActivateTask(CPU2Task1Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 97); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask10.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 121); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 80); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 52); // 0
  ActivateTask(CPU2Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 114); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 109); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  ActivateTask(CPU4Task4Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 30); // 0
  ActivateTask(CPU4Task4Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 98); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 44); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 25); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 164); // 0
  ActivateTask(CPU5Task3Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 55); // 0
  TerminateTask();

}
