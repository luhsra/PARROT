#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask7);
DeclareTask(CPU0Task5Subtask12);
DeclareTask(CPU1Task0Subtask0);
DeclareTask(CPU1Task0Subtask6);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU2Task4Subtask1);
DeclareTask(CPU3Task1Subtask3);
DeclareTask(CPU3Task1Subtask13);
DeclareTask(CPU4Task2Subtask2);
DeclareTask(CPU4Task2Subtask4);
DeclareTask(CPU4Task2Subtask5);
DeclareTask(CPU4Task2Subtask8);
DeclareTask(CPU5Task3Subtask10);
DeclareTask(CPU5Task3Subtask11);
DeclareTask(CPU5Task3Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task3Subtask14 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 13); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 45); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 8); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 41); // 0
  ActivateTask(CPU0Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 56); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 182); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 171); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 178); // 0
  ActivateTask(CPU1Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 41); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 19); // 0
  ActivateTask(CPU1Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 110); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 94); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 110); // 0
  ActivateTask(CPU3Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 129); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 167); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 99); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 88); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 164); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 123); // 0
  ActivateTask(CPU4Task2Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 32); // 0
  ActivateTask(CPU4Task2Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 11); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 146); // 0
  ActivateTask(CPU4Task2Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 110); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 143); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 139); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 71); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 153); // 0
  ActivateTask(CPU5Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 186); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 48); // 0
  ActivateTask(CPU5Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task3Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 199); // 0
  TerminateTask();

}
