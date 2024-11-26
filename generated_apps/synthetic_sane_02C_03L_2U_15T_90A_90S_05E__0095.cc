#include "autosar/os.h"
#include "test/test.h"
#include "machine.h"

//#include "fail/trace.h"

void ara_timing_info(int, int);



DeclareSpinlock(LOCK0);
DeclareSpinlock(LOCK1);
DeclareSpinlock(LOCK2);


DeclareEvent(EVENT0, 1);
DeclareEvent(EVENT1, 2);
DeclareEvent(EVENT2, 3);
DeclareEvent(EVENT3, 4);
DeclareEvent(EVENT4, 5);


DeclareTask(CPU0Task3Subtask2);
DeclareTask(CPU0Task3Subtask12);
DeclareTask(CPU0Task4Subtask0);
DeclareTask(CPU0Task4Subtask4);
DeclareTask(CPU0Task4Subtask6);
DeclareTask(CPU0Task5Subtask1);
DeclareTask(CPU0Task5Subtask7);
DeclareTask(CPU0Task5Subtask9);
DeclareTask(CPU0Task5Subtask11);
DeclareTask(CPU1Task0Subtask10);
DeclareTask(CPU1Task0Subtask13);
DeclareTask(CPU1Task1Subtask3);
DeclareTask(CPU1Task1Subtask8);
DeclareTask(CPU1Task2Subtask5);
DeclareTask(CPU1Task2Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void);



void AUTOSAR_TASK_FUNC_CPU0Task3Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 38); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 184); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 179); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 64); // 0
  ActivateTask(CPU0Task3Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 140); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 143); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 199); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 29); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 148); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 26); // 0
  ActivateTask(CPU1Task0Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 166); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask0.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 82); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 67); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 51); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 165); // 0
  ActivateTask(CPU0Task4Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 52); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 150); // 0
  ActivateTask(CPU0Task5Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 163); // 0
  ActivateTask(CPU0Task5Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 101); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 8); // 0
  SetEvent(CPU1Task0Subtask10,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 87); // 0
  ActivateTask(CPU1Task0Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 166); // 0
  SetEvent(CPU1Task1Subtask3,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 198); // 0
  ActivateTask(CPU1Task1Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 87); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask11.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 175); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 25); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(8, 23); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 65); // 0
  SetEvent(CPU1Task2Subtask5,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 182); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask7.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 53); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task5Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task5Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 174); // 0
  ActivateTask(CPU0Task4Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 146); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 13); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 137); // 0
  SetEvent(CPU0Task4Subtask0,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task5Subtask9.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 199); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 116); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 63); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 70); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task0Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task0Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 25); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task0Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 193); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 16); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 63); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask3.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 62); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 153); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 192); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(10, 21); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 85); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 43); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 18); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task1Subtask8.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 41); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 70); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 145); // 0
  ActivateTask(CPU1Task2Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 27); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 124); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 163); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 65); // 0
  SetEvent(CPU0Task5Subtask11,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 56); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 42); // 0
  TerminateTask();

}
