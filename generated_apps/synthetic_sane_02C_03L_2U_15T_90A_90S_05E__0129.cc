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


DeclareTask(CPU0Task0Subtask4);
DeclareTask(CPU0Task0Subtask7);
DeclareTask(CPU0Task1Subtask1);
DeclareTask(CPU0Task1Subtask5);
DeclareTask(CPU0Task1Subtask8);
DeclareTask(CPU0Task1Subtask9);
DeclareTask(CPU0Task4Subtask3);
DeclareTask(CPU0Task4Subtask11);
DeclareTask(CPU1Task2Subtask2);
DeclareTask(CPU1Task3Subtask0);
DeclareTask(CPU1Task3Subtask13);
DeclareTask(CPU1Task3Subtask14);
DeclareTask(CPU1Task5Subtask6);
DeclareTask(CPU1Task5Subtask10);
DeclareTask(CPU1Task5Subtask12);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task0Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 132); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 26); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 97); // 0
  SetEvent(CPU1Task3Subtask0,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask4.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 24); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task0Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task0Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 198); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 72); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 137); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 12); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task0Subtask7.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 25); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 156); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 10); // 0
  SetEvent(CPU0Task0Subtask4,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 171); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 186); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.6 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(4, 28); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 90); // 0
  SetEvent(CPU0Task1Subtask5,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 76); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask1.7 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 79); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 54); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 16); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 39); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 103); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask5.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 158); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 101); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 116); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 66); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 141); // 0
  SetEvent(CPU1Task5Subtask6,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 154); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 40); // 0
  ActivateTask(CPU0Task1Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 46); // 0
  ActivateTask(CPU0Task1Subtask5);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask9.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 133); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 22); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 98); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 33); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task4Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task4Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 145); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 16); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task4Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task2Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task2Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 134); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 32); // 0
  GetSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(7, 16); // 1
  ReleaseSpinlock(LOCK1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 152); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 56); // 0
  ActivateTask(CPU0Task0Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task2Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 115); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 29); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 95); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 108); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask0.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 194); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 174); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 121); // 0
  ActivateTask(CPU1Task3Subtask0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 42); // 0
  ActivateTask(CPU1Task3Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 169); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 77); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 48); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 45); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(9, 18); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 152); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 173); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 100); // 0
  GetSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 11); // 1
  ReleaseSpinlock(LOCK2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 31); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 25); // 0
  ActivateTask(CPU1Task5Subtask6);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask10.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 85); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 40); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 140); // 0
  ActivateTask(CPU1Task5Subtask10);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 25); // 0
  ActivateTask(CPU0Task1Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 81); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 160); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 164); // 0
  ActivateTask(CPU0Task4Subtask11);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 194); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 29); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 51); // 0
  SetEvent(CPU0Task4Subtask11,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task5Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 71); // 0
  TerminateTask();

}