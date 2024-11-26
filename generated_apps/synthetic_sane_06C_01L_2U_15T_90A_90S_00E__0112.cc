#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task1Subtask6);
DeclareTask(CPU0Task1Subtask12);
DeclareTask(CPU1Task2Subtask4);
DeclareTask(CPU1Task2Subtask8);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU2Task3Subtask0);
DeclareTask(CPU2Task3Subtask13);
DeclareTask(CPU3Task5Subtask2);
DeclareTask(CPU3Task5Subtask3);
DeclareTask(CPU3Task5Subtask5);
DeclareTask(CPU3Task5Subtask9);
DeclareTask(CPU3Task5Subtask10);
DeclareTask(CPU4Task0Subtask1);
DeclareTask(CPU4Task0Subtask11);
DeclareTask(CPU5Task4Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 165); // 0
  ActivateTask(CPU0Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 106); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 195); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 79); // 0
  ActivateTask(CPU1Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 149); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 104); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 147); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 124); // 0
  ActivateTask(CPU1Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 65); // 0
  ActivateTask(CPU3Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 28); // 0
  ActivateTask(CPU2Task3Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 65); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task3Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 58); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 95); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 142); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 194); // 0
  ActivateTask(CPU3Task5Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 178); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 60); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 33); // 0
  ActivateTask(CPU3Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 192); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 32); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 44); // 0
  ActivateTask(CPU3Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 135); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 170); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 186); // 0
  ActivateTask(CPU4Task0Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 15); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 114); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 27); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 130); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 103); // 0
  TerminateTask();

}
