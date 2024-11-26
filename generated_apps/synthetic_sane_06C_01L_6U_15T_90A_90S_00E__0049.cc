#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);




DeclareTask(CPU0Task5Subtask2);
DeclareTask(CPU0Task5Subtask3);
DeclareTask(CPU0Task5Subtask14);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task3Subtask9);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU2Task2Subtask5);
DeclareTask(CPU3Task1Subtask1);
DeclareTask(CPU3Task1Subtask4);
DeclareTask(CPU3Task1Subtask10);
DeclareTask(CPU4Task0Subtask0);
DeclareTask(CPU4Task0Subtask6);
DeclareTask(CPU4Task0Subtask8);
DeclareTask(CPU5Task4Subtask11);
DeclareTask(CPU5Task4Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task4Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 171); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 11); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 193); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 86); // 0
  ActivateTask(CPU0Task5Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 43); // 0
  ActivateTask(CPU5Task4Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 48); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 120); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 55); // 0
  ActivateTask(CPU1Task3Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 155); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 53); // 0
  ActivateTask(CPU4Task0Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 47); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 116); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 63); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 22); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 27); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 162); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 64); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 6); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 159); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask10.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 14); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 46); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 83); // 0
  ActivateTask(CPU3Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 164); // 0
  ActivateTask(CPU3Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task1Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 7); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 69); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 61); // 0
  ActivateTask(CPU4Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 166); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 188); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 173); // 0
  ActivateTask(CPU4Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 45); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 9); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 4); // 0
  ActivateTask(CPU5Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 182); // 0
  TerminateTask();

}
