//using System;
//using System.Collections.Generic;
//using System.Linq;

//namespace C__Learning
//{
//    // 定义“学生成绩”类（作为Dictionary的值类型）
//    public class StudentScore
//    {
//        public string Name { get; set; } // 学生姓名
//        public int Score { get; set; }   // 考试成绩

//        // 重写ToString，方便输出
//        public override string ToString()
//        {
//            return $"姓名：{Name}，成绩：{Score}";
//        }
//    }

//    class Program
//    {
//        static void Main(string[] args)
//        {
//            // 1. 初始化Dictionary：键=学号（string），值=StudentScore（自定义类）
//            Dictionary<string, StudentScore> scoreDict = new Dictionary<string, StudentScore>()
//            {
//                // 初始添加2个学生（键值对）
//                {"2024001", new StudentScore { Name = "张三", Score = 92 }},
//                {"2024002", new StudentScore { Name = "李四", Score = 85 }}
//            };

//            // 2. 添加新学生（Add方法）
//            scoreDict.Add("2024003", new StudentScore { Name = "王五", Score = 78 });
//            Console.WriteLine("添加后所有学生：");
//            PrintAllStudents(scoreDict);


//            // 3. 查找学生成绩（两种方式）
//            string targetId = "2024002"; // 目标学号

//            // 方式1：TryGetValue（推荐，安全无异常）
//            if (scoreDict.TryGetValue(targetId, out StudentScore foundStudent))
//            {
//                Console.WriteLine($"\n查找学号 {targetId}：{foundStudent}");
//            }
//            else
//            {
//                Console.WriteLine($"\n学号 {targetId} 不存在");
//            }

//            // 方式2：直接索引器（键不存在时抛异常，需确保键存在）
//            try
//            {
//                StudentScore zhangSan = scoreDict["2024001"];
//                Console.WriteLine($"学号 2024001：{zhangSan}");
//            }
//            catch (KeyNotFoundException ex)
//            {
//                Console.WriteLine($"查找失败：{ex.Message}");
//            }


//            // 4. 修改学生成绩（通过索引器直接赋值）
//            scoreDict["2024003"].Score = 88; // 将王五的成绩从78改为88
//            Console.WriteLine($"\n修改后学号 2024003：{scoreDict["2024003"]}");


//            // 5. 删除学生（Remove方法）
//            bool isRemoved = scoreDict.Remove("2024002"); // 删除李四
//            Console.WriteLine($"\n删除学号 2024002：{(isRemoved ? "成功" : "失败")}");
//            Console.WriteLine("删除后所有学生：");
//            PrintAllStudents(scoreDict);


//            // 6. 其他常用操作
//            Console.WriteLine($"\n当前学生总数：{scoreDict.Count}"); // 获取数量
//            Console.WriteLine($"是否包含学号 2024004：{scoreDict.ContainsKey("2024004")}"); // 判断键存在

//            // 清空字典
//            scoreDict.Clear();
//            Console.WriteLine($"\n清空后学生总数：{scoreDict.Count}");
//        }

//        // 辅助方法：打印所有学生信息
//        static void PrintAllStudents(Dictionary<string, StudentScore> dict)
//        {
//            // 遍历字典（KeyValuePair<TKey, TValue> 是键值对的类型）
//            foreach (KeyValuePair<string, StudentScore> item in dict)
//            {
//                Console.WriteLine($"学号：{item.Key}，{item.Value}");
//            }
//        }
//    }
//}