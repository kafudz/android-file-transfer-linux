#ifndef OBJECTPROPERTY_H
#define	OBJECTPROPERTY_H

namespace mtp
{

	enum struct ObjectProperty
	{
		StorageId			= 0xdc01,
		ObjectFormat		= 0xdc02,
		ObjectSize			= 0xdc04,
		ObjectFilename		= 0xdc07
	};

}

#endif	/* OBJECTPROPERTY_H */
