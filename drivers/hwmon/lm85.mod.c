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
	{ 0xe6478472, "_dev_info" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0x2f9e7f8e, "vid_which_vrm" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x60ea2d6, "kstrtoull" },
	{ 0x446615bd, "vid_from_reg" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1b17e06c, "kstrtoll" },
	{ 0x20e2dc83, "i2c_smbus_write_byte_data" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x91715312, "sprintf" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xda261c70, "i2c_smbus_read_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon-vid";

MODULE_ALIAS("of:N*T*Cadi,adm1027");
MODULE_ALIAS("of:N*T*Cadi,adm1027C*");
MODULE_ALIAS("of:N*T*Cadi,adt7463");
MODULE_ALIAS("of:N*T*Cadi,adt7463C*");
MODULE_ALIAS("of:N*T*Cadi,adt7468");
MODULE_ALIAS("of:N*T*Cadi,adt7468C*");
MODULE_ALIAS("of:N*T*Cnational,lm85");
MODULE_ALIAS("of:N*T*Cnational,lm85C*");
MODULE_ALIAS("of:N*T*Cnational,lm85b");
MODULE_ALIAS("of:N*T*Cnational,lm85bC*");
MODULE_ALIAS("of:N*T*Cnational,lm85c");
MODULE_ALIAS("of:N*T*Cnational,lm85cC*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d100");
MODULE_ALIAS("of:N*T*Csmsc,emc6d100C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d101");
MODULE_ALIAS("of:N*T*Csmsc,emc6d101C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d102");
MODULE_ALIAS("of:N*T*Csmsc,emc6d102C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103C*");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103s");
MODULE_ALIAS("of:N*T*Csmsc,emc6d103sC*");
MODULE_ALIAS("i2c:adm1027");
MODULE_ALIAS("i2c:adt7463");
MODULE_ALIAS("i2c:adt7468");
MODULE_ALIAS("i2c:lm85");
MODULE_ALIAS("i2c:lm85b");
MODULE_ALIAS("i2c:lm85c");
MODULE_ALIAS("i2c:emc6d100");
MODULE_ALIAS("i2c:emc6d101");
MODULE_ALIAS("i2c:emc6d102");
MODULE_ALIAS("i2c:emc6d103");
MODULE_ALIAS("i2c:emc6d103s");

MODULE_INFO(srcversion, "1276B542DAA9724009F14D9");
MODULE_INFO(rhelversion, "8.0");
