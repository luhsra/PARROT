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


DeclareTask(CPU0Task1Subtask2);
DeclareTask(CPU0Task1Subtask10);
DeclareTask(CPU0Task1Subtask13);
DeclareTask(CPU1Task3Subtask3);
DeclareTask(CPU1Task3Subtask8);
DeclareTask(CPU2Task0Subtask0);
DeclareTask(CPU3Task4Subtask1);
DeclareTask(CPU3Task4Subtask11);
DeclareTask(CPU4Task2Subtask5);
DeclareTask(CPU4Task2Subtask7);
DeclareTask(CPU4Task2Subtask9);
DeclareTask(CPU5Task5Subtask4);
DeclareTask(CPU5Task5Subtask6);
DeclareTask(CPU5Task5Subtask12);
DeclareTask(CPU5Task5Subtask14);


TEST_MAKE_OS_MAIN( StartOS(0) )

// Prototypes

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask1 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask7 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU4Task2Subtask9 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask12 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask4 (void);

noinline EXTERN_C_DECL void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void);



void AUTOSAR_TASK_FUNC_CPU0Task1Subtask10 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask10" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 23); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 63); // 0
  ActivateTask(CPU0Task1Subtask13);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 196); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask10.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask13 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask13" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 73); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 144); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 80); // 0
  WaitEvent(EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(9, 56); // 0
  ActivateTask(CPU0Task1Subtask2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask13.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 151); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU0Task1Subtask2 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU0Task1Subtask2" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 105); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 80); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.4 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(6, 10); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 58); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(15, 123); // 0
  WaitEvent(EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU0Task1Subtask2.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 64); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask3 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask3" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 62); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 44); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask3.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 38); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU1Task3Subtask8 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU1Task3Subtask8" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 121); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 147); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 155); // 0
  ActivateTask(CPU1Task3Subtask3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU1Task3Subtask8.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 100); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU2Task0Subtask0 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU2Task0Subtask0" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 19); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 88); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 131); // 0
  GetSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.3 sys_allowed=False inside_critical=True> x*/
  ara_timing_info(1, 20); // 1
  ReleaseSpinlock(LOCK0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU2Task0Subtask0.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 131); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask1 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask1" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask1.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 56); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask1.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 84); // 0
  WaitEvent(EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask1.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 186); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask1.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(2, 55); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU3Task4Subtask11 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU3Task4Subtask11" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 20); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 146); // 0
  ActivateTask(CPU3Task4Subtask1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(10, 195); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU3Task4Subtask11.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(13, 16); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask5 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask5" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 15); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 33); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(7, 16); // 0
  SetEvent(CPU3Task4Subtask1,EVENT2);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 44); // 0
  ActivateTask(CPU4Task2Subtask7);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask5.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 61); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask7 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask7" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 60); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 127); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask7.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 46); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU4Task2Subtask9 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU4Task2Subtask9" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(17, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 119); // 0
  WaitEvent(EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 69); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU4Task2Subtask9.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 167); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask12 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask12" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 185); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 102); // 0
  SetEvent(CPU4Task2Subtask9,EVENT4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 129); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 77); // 0
  ActivateTask(CPU4Task2Subtask9);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask12.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 123); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask14 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask14" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(11, 181); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(4, 35); // 0
  SetEvent(CPU0Task1Subtask2,EVENT0);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(8, 62); // 0
  ActivateTask(CPU5Task5Subtask12);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(20, 61); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 84); // 0
  WaitEvent(EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask14.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 20); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask4 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask4" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(19, 67); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(18, 68); // 0
  ActivateTask(CPU5Task5Subtask14);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 64); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask4.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(5, 11); // 0
  TerminateTask();

}

void AUTOSAR_TASK_FUNC_CPU5Task5Subtask6 (void) {
  // kout << "AUTOSAR_TASK_FUNC_CPU5Task5Subtask6" << endl;
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.0 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(3, 83); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.1 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(16, 91); // 0
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.2 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(14, 120); // 0
  SetEvent(CPU5Task5Subtask14,EVENT1);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.3 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(1, 144); // 0
  ActivateTask(CPU5Task5Subtask4);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.4 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(12, 79); // 0
  SetEvent(CPU0Task1Subtask13,EVENT3);
  /* <InsertionPoint AUTOSAR_TASK_FUNC_CPU5Task5Subtask6.5 sys_allowed=True inside_critical=False> x*/
  ara_timing_info(6, 183); // 0
  TerminateTask();

}
