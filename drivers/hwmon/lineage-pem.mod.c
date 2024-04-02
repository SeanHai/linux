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
	{ 0x28318305, "snprintf" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xc69c9a1f, "devm_hwmon_device_register_with_groups" },
	{ 0xe6478472, "_dev_info" },
	{ 0x778aa0e0, "i2c_smbus_write_byte" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6d7aac23, "i2c_smbus_read_block_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:lineage_pem");

MODULE_INFO(srcversion, "AE8CB2F9227A21802524DAF");
MODULE_INFO(rhelversion, "8.0");
