#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task3Subtask6);
DeclareTask(CPU0Task3Subtask7);
DeclareTask(CPU1Task1Subtask8);
DeclareTask(CPU2Task4Subtask1);
DeclareTask(CPU2Task4Subtask2);
DeclareTask(CPU3Task2Subtask3);
DeclareTask(CPU3Task2Subtask5);
DeclareTask(CPU3Task2Subtask12);
DeclareTask(CPU3Task2Subtask14);
DeclareTask(CPU4Task5Subtask0);
DeclareTask(CPU4Task5Subtask10);
DeclareTask(CPU4Task5Subtask11);
DeclareTask(CPU5Task0Subtask4);
DeclareTask(CPU5Task0Subtask9);
DeclareTask(CPU5Task0Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 86); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 151); // 0
  ActivateTask(CPU0Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 163); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 199); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 198); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 89); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 120); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 26); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 74); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 40); // 0
  SetEvent(CPU4Task5Subtask0,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 19); // 0
  ActivateTask(CPU3Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 163); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(3, 13); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 61); // 0
  ActivateTask(CPU3Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask12.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 21); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 109); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 163); // 0
  SetEvent(CPU5Task0Subtask13,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 9); // 0
  ActivateTask(CPU2Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 87); // 0
  SetEvent(CPU5Task0Subtask9,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 73); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 93); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 53); // 0
  ActivateTask(CPU2Task4Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 151); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 124); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 50); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 150); // 0
  SetEvent(CPU3Task2Subtask14,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 119); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 7); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 148); // 0
  ActivateTask(CPU4Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 200); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 25); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 179); // 0
  ActivateTask(CPU3Task2Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask0.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 118); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 180); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 187); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 103); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 193); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 96); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 19); // 0
  ActivateTask(CPU5Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 34); // 0
  SetEvent(CPU3Task2Subtask5,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 60); // 0
  ActivateTask(CPU5Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask4.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 200); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 109); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 77); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 198); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 127); // 0
  TerminateTask();

}
