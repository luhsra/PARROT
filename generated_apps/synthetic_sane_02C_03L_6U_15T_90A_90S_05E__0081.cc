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


DeclareTask(CPU0Task0Subtask0);
DeclareTask(CPU0Task0Subtask1);
DeclareTask(CPU0Task0Subtask9);
DeclareTask(CPU0Task1Subtask4);
DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask7);
DeclareTask(CPU0Task1Subtask14);
DeclareTask(CPU0Task3Subtask3);
DeclareTask(CPU0Task3Subtask8);
DeclareTask(CPU0Task3Subtask10);
DeclareTask(CPU1Task2Subtask13);
DeclareTask(CPU1Task4Subtask2);
DeclareTask(CPU1Task4Subtask6);
DeclareTask(CPU1Task5Subtask11);
DeclareTask(CPU1Task5Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 90); // 0
  ActivateTask(CPU0Task0Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 155); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 68); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 188); // 0
  ActivateTask(CPU1Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 83); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 102); // 0
  ActivateTask(CPU0Task1Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 117); // 0
  SetEvent(CPU0Task1Subtask14,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask1.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 102); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 140); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 18); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 67); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 53); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 28); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 89); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.5 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 5); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask14.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 92); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 63); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 176); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(5, 14); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 79); // 0
  ActivateTask(CPU0Task1Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 97); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 37); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 197); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 57); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 189); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 113); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 198); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 73); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(2, 11); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 157); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 109); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 196); // 0
  SetEvent(CPU1Task5Subtask11,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 133); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask3.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 31); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 75); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 103); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 164); // 0
  ActivateTask(CPU0Task3Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 138); // 0
  ActivateTask(CPU0Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task3Subtask8.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 102); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 137); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 150); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 163); // 0
  SetEvent(CPU1Task4Subtask6,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 94); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.7 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 21); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 153); // 0
  ActivateTask(CPU0Task3Subtask8);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.6 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 53); // 0
  SetEvent(CPU0Task3Subtask10,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask13.8 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 158); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 57); // 0
  SetEvent(CPU0Task0Subtask1,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 72); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task4Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task4Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 17); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 105); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 190); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task4Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 183); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 81); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 35); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 161); // 0
  ActivateTask(CPU0Task0Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 43); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 104); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask11.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 127); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 24); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 96); // 0
  ActivateTask(CPU1Task5Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 197); // 0
  ActivateTask(CPU0Task1Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 172); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 99); // 0
  TerminateTask();

}