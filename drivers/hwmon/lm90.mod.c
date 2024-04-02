#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe6af07fa, "module_layout" },
	{ 0xa46c2bd8, "i2c_del_driver" },
	{ 0x37bf01f3, "i2c_register_driver" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0x70f3afb7, "devm_hwmon_device_register_with_info" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x9e3f36ab, "devm_add_action" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x9020c14d, "i2c_smbus_read_byte" },
	{ 0x6a584776, "i2c_smbus_xfer" },
	{ 0x91715312, "sprintf" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xe6478472, "_dev_info" },
	{ 0x5792f848, "strlcpy" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cadi,adm1032");
MODULE_ALIAS("of:N*T*Cadi,adm1032C*");
MODULE_ALIAS("of:N*T*Cadi,adt7461");
MODULE_ALIAS("of:N*T*Cadi,adt7461C*");
MODULE_ALIAS("of:N*T*Cadi,adt7461a");
MODULE_ALIAS("of:N*T*Cadi,adt7461aC*");
MODULE_ALIAS("of:N*T*Cgmt,g781");
MODULE_ALIAS("of:N*T*Cgmt,g781C*");
MODULE_ALIAS("of:N*T*Cnational,lm90");
MODULE_ALIAS("of:N*T*Cnational,lm90C*");
MODULE_ALIAS("of:N*T*Cnational,lm86");
MODULE_ALIAS("of:N*T*Cnational,lm86C*");
MODULE_ALIAS("of:N*T*Cnational,lm89");
MODULE_ALIAS("of:N*T*Cnational,lm89C*");
MODULE_ALIAS("of:N*T*Cnational,lm99");
MODULE_ALIAS("of:N*T*Cnational,lm99C*");
MODULE_ALIAS("of:N*T*Cdallas,max6646");
MODULE_ALIAS("of:N*T*Cdallas,max6646C*");
MODULE_ALIAS("of:N*T*Cdallas,max6647");
MODULE_ALIAS("of:N*T*Cdallas,max6647C*");
MODULE_ALIAS("of:N*T*Cdallas,max6649");
MODULE_ALIAS("of:N*T*Cdallas,max6649C*");
MODULE_ALIAS("of:N*T*Cdallas,max6657");
MODULE_ALIAS("of:N*T*Cdallas,max6657C*");
MODULE_ALIAS("of:N*T*Cdallas,max6658");
MODULE_ALIAS("of:N*T*Cdallas,max6658C*");
MODULE_ALIAS("of:N*T*Cdallas,max6659");
MODULE_ALIAS("of:N*T*Cdallas,max6659C*");
MODULE_ALIAS("of:N*T*Cdallas,max6680");
MODULE_ALIAS("of:N*T*Cdallas,max6680C*");
MODULE_ALIAS("of:N*T*Cdallas,max6681");
MODULE_ALIAS("of:N*T*Cdallas,max6681C*");
MODULE_ALIAS("of:N*T*Cdallas,max6695");
MODULE_ALIAS("of:N*T*Cdallas,max6695C*");
MODULE_ALIAS("of:N*T*Cdallas,max6696");
MODULE_ALIAS("of:N*T*Cdallas,max6696C*");
MODULE_ALIAS("of:N*T*Connn,nct1008");
MODULE_ALIAS("of:N*T*Connn,nct1008C*");
MODULE_ALIAS("of:N*T*Cwinbond,w83l771");
MODULE_ALIAS("of:N*T*Cwinbond,w83l771C*");
MODULE_ALIAS("of:N*T*Cnxp,sa56004");
MODULE_ALIAS("of:N*T*Cnxp,sa56004C*");
MODULE_ALIAS("of:N*T*Cti,tmp451");
MODULE_ALIAS("of:N*T*Cti,tmp451C*");
MODULE_ALIAS("i2c:adm1032");
MODULE_ALIAS("i2c:adt7461");
MODULE_ALIAS("i2c:adt7461a");
MODULE_ALIAS("i2c:g781");
MODULE_ALIAS("i2c:lm90");
MODULE_ALIAS("i2c:lm86");
MODULE_ALIAS("i2c:lm89");
MODULE_ALIAS("i2c:lm99");
MODULE_ALIAS("i2c:max6646");
MODULE_ALIAS("i2c:max6647");
MODULE_ALIAS("i2c:max6649");
MODULE_ALIAS("i2c:max6657");
MODULE_ALIAS("i2c:max6658");
MODULE_ALIAS("i2c:max6659");
MODULE_ALIAS("i2c:max6680");
MODULE_ALIAS("i2c:max6681");
MODULE_ALIAS("i2c:max6695");
MODULE_ALIAS("i2c:max6696");
MODULE_ALIAS("i2c:nct1008");
MODULE_ALIAS("i2c:w83l771");
MODULE_ALIAS("i2c:sa56004");
MODULE_ALIAS("i2c:tmp451");

MODULE_INFO(srcversion, "01037253C6A0157991CC966");
MODULE_INFO(rhelversion, "8.0");
