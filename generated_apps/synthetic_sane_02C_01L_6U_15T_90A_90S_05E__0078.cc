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
DeclareTask(CPU0Task2Subtask3);
DeclareTask(CPU0Task2Subtask9);
DeclareTask(CPU0Task4Subtask1);
DeclareTask(CPU0Task4Subtask5);
DeclareTask(CPU0Task4Subtask12);
DeclareTask(CPU1Task0Subtask4);
DeclareTask(CPU1Task0Subtask8);
DeclareTask(CPU1Task0Subtask11);
DeclareTask(CPU1Task0Subtask14);
DeclareTask(CPU1Task1Subtask6);
DeclareTask(CPU1Task1Subtask10);
DeclareTask(CPU1Task3Subtask2);
DeclareTask(CPU1Task3Subtask7);
DeclareTask(CPU1Task5Subtask13);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void);



void AUTOSAR_TASK_FUNC_CPU0Task2Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 141); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 106); // 0
  ActivateTask(CPU0Task2Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 64); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 17); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask0.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 42); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 113); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 146); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 118); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 88); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 50); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 109); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 104); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 165); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 140); // 0
  SetEvent(CPU1Task0Subtask14,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 89); // 0
  ActivateTask(CPU0Task4Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 30); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 34); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 38); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 94); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 122); // 0
  SetEvent(CPU0Task4Subtask5,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 199); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 26); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 195); // 0
  SetEvent(CPU0Task2Subtask9,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 119); // 0
  ActivateTask(CPU1Task0Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 131); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask11.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 197); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 168); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 38); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 175); // 0
  ActivateTask(CPU1Task0Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 196); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 189); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 194); // 0
  ActivateTask(CPU0Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 46); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 185); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 184); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 126); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 188); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 7); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 93); // 0
  ActivateTask(CPU0Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 107); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 95); // 0
  ActivateTask(CPU1Task1Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 21); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 58); // 0
  SetEvent(CPU0Task4Subtask1,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 104); // 0
  ActivateTask(CPU1Task3Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask2.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 23); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 37); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 89); // 0
  ActivateTask(CPU1Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 143); // 0
  SetEvent(CPU1Task0Subtask4,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 87); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 49); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 14); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 30); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 112); // 0
  TerminateTask();

}
