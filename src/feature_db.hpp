#ifndef CPU_FEATURE_DB_HPP
#define CPU_FEATURE_DB_HPP

#include <vector>
#include <string>

using namespace std;

namespace FeatureDb {
		class Database {

		private:
				string _name;
				string _description;
				vector<Table> _tables;
		};

		class Table {

		private:
				string _name;
				string _description;
				vector<Column> _columns;
		};

		class Column {

		private:
				string _name;
				string _description;
				DataType _datatype;
				size_t _length; // -1->动态长度,0->标量（与1相同）
		};

		enum DataType {
				INT8, INT16, INT32, INT64,
				UINT8, UINT16, UINT32, UINT64,
				FLOAT16, FLOAT32, FLOAT64,
				BOOL, TEXT, DATETIME, BLOB
		};
}

#endif //CPU_FEATURE_DB_HPP
