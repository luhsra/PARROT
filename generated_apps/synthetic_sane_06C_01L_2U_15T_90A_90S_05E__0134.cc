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


DeclareTask(CPU0Task2Subtask0);
DeclareTask(CPU0Task2Subtask7);
DeclareTask(CPU1Task0Subtask3);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask9);
DeclareTask(CPU2Task5Subtask14);
DeclareTask(CPU3Task3Subtask1);
DeclareTask(CPU3Task3Subtask5);
DeclareTask(CPU4Task4Subtask4);
DeclareTask(CPU4Task4Subtask11);
DeclareTask(CPU4Task4Subtask13);
DeclareTask(CPU5Task1Subtask2);
DeclareTask(CPU5Task1Subtask6);
DeclareTask(CPU5Task1Subtask10);
DeclareTask(CPU5Task1Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task3Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task1Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 32); // 0
  ActivateTask(CPU0Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 178); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 12); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 29); // 0
  SetEvent(CPU5Task1Subtask10,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  ActivateTask(CPU5Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 90); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 38); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 52); // 0
  ActivateTask(CPU1Task0Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 45); // 0
  ActivateTask(CPU5Task1Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 11); // 0
  ActivateTask(CPU1Task0Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 18); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 45); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 184); // 0
  SetEvent(CPU1Task0Subtask3,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 164); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 172); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 151); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 153); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 100); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task3Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task3Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 183); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 100); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 136); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task3Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 28); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 84); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 60); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 32); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 99); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 55); // 0
  ActivateTask(CPU4Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 96); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 23); // 0
  SetEvent(CPU4Task4Subtask11,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 188); // 0
  ActivateTask(CPU4Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task4Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 178); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 112); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 185); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 54); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 19); // 0
  SetEvent(CPU5Task1Subtask6,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 125); // 0
  ActivateTask(CPU5Task1Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 108); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 33); // 0
  SetEvent(CPU3Task3Subtask5,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 182); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 194); // 0
  ActivateTask(CPU3Task3Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task1Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 140); // 0
  TerminateTask();

}