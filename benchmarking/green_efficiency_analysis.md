# Green Efficiency Analysis
## Measurement Methodology

Three different programs' run times were measured using the C clock() function. The first program iterated a loop 100 million times, and the time taken measured three times to be averaged. The second program counts how many even numbers are in an array in two different ways. One way was a naïve algorithm and the other was a single-pass algorithm. Each method's time was calculated, and how many iterations were needed were calculated three times and the average taken for the final result. The third program was used to calculate how long different parts of a program take which included, building a set of numbers, processing the set of numbers, and adding all the numbers together. All measurements were rounded to 6 decimal places and were collected on the same system using the same compiler settings.

## Observed Performance Differences
Tables of each of the recorded data can be found at the end of this document.

The average time the program took to iterate through 100 million numbers was 0.091323 seconds ((0.088242 + 0.086297 + 0.099429) / 3). On average, the second program the single pass algorithm took 0.000097 seconds to iterate over 4000 times less numbers than the baseline. Theoretically, it should have only taken 0.000023 seconds, according to the baseline measurement. This can be explained by the if (data[i] % 2 == 0) line of code that checks if a number is even, adding to the runtime of the program. The naïve algorithm took on average 2.373413 seconds to complete, which is significantly longer than the single-pass algorithm. This can be explained by how each pass is coded. The naïve pass includes nested loops that examines each element of the dataset multiple times. This causes workload to increase drastically as the dataset grows. Whereas the single-pass algorithm only examines each element once.

The instrumentation program took a total execution time of 0.000520 seconds. The time for each individual task was 0.000233 seconds for dataset construction, 0.000180 seconds for dataset processing, and 0.000105 seconds for checksum reduction. The measured total time of the program was greater than each individual phase making the measurements more reliable.

## Relation Between Runtime and Energy Consumption
When a CPU is executing a task it consumed more energy than when it is not. When a program in running the CPU is executing a task, therefore the longer a program takes the more energy it is consuming. This means that programs that take longer to execute may cost more power than programs that are shorter. Therefore, programs that complete the same tasks in a shorter time span than programs that take longer can be considered more energy-efficient.

## Limitations of the Experiment
In this experiment we are measuring the time it takes to complete different tasks. This does not exactly translate to the energy usage of each program, so we are not directly measuring energy usage. Therefore, even if an execution time of one task is longer than another, it does not mean that the longer task used more energy. For a more accurate representation of what program requires the most energy, we would need to measure energy consumption during each program.

## Practical Engineering Takeaway
The execution times between between each run of the same program only differed slightly. Whereas comparing the different runtimes of the naïve algorithm versus the single-pass algorithm differentiated significantly. This shows that algorithm design has a large impact on runtime. Furthermore, from the instrumentation test we can see that the creating a dataset took the longest when compared to processing, and adding numbers. Therefore, when optimising a program, the best place to start may be when creating a set of data.

### Baseline Loop
| Execution | Interations | Execution Time (s) |
| --------- | ----------- | ------------------ |
| 1         | 100000000   | 0.088242           |
| 2         | 100000000   | 0.086297           |
| 3         | 100000000   | 0.099429           |
| Average   |             |                    |	

### Algorithm Comparison
| Execution Number | Naïve Algorithm Result | Naïve Algorithm Time (s) | Single-pass Algorithm Result | Single-pass Algorithm Time (s) |
| ---------------- | ---------------------- | ------------------------ | ---------------------------- | ------------------------------ |
| 1                | 625025000              | 2.365557                 | 25000                        | 0.000098                       |
| 2                | 625025000              | 2.364587                 | 25000                        | 0.000097                       |
| 3                | 625025000              | 2.390094                 | 25000                        | 0.000097                       |


### Instrumentation Measurements
| Total    | Build data | Process  | Reduce   |
| -------- | ---------- | -------- | -------- |
| 0.000520 | 0.000233   | 0.000180 | 0.000105 |
