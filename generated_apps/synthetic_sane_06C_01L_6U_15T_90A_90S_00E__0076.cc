#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task3Subtask10);
DeclareTask(CPU0Task3Subtask11);
DeclareTask(CPU0Task3Subtask13);
DeclareTask(CPU1Task2Subtask3);
DeclareTask(CPU1Task2Subtask5);
DeclareTask(CPU1Task2Subtask9);
DeclareTask(CPU1Task2Subtask14);
DeclareTask(CPU2Task1Subtask2);
DeclareTask(CPU2Task1Subtask8);
DeclareTask(CPU3Task4Subtask4);
DeclareTask(CPU4Task0Subtask1);
DeclareTask(CPU4Task0Subtask12);
DeclareTask(CPU5Task5Subtask0);
DeclareTask(CPU5Task5Subtask6);
DeclareTask(CPU5Task5Subtask7);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask7 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 150); // 0
  ActivateTask(CPU1Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 59); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 82); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 129); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 161); // 0
  ActivateTask(CPU0Task3Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 64); // 0
  ActivateTask(CPU1Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 145); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 42); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 44); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 139); // 0
  ActivateTask(CPU1Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 76); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 171); // 0
  ActivateTask(CPU2Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 134); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 158); // 0
  ActivateTask(CPU5Task5Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 65); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 106); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 149); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 94); // 0
  ActivateTask(CPU4Task0Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 179); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask12.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 21); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 166); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 9); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 173); // 0
  ActivateTask(CPU5Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 151); // 0
  TerminateTask();

}