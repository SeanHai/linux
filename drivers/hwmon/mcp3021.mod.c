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
	{ 0x29686856, "hwmon_device_register" },
	{ 0x1daf1f8d, "sysfs_create_file_ns" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x570add14, "sysfs_remove_file_ns" },
	{ 0x2b259a46, "hwmon_device_unregister" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91715312, "sprintf" },
	{ 0x67c6a5ce, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:mcp3021");
MODULE_ALIAS("i2c:mcp3221");

MODULE_INFO(srcversion, "B30752C0D350B9358284B61");
MODULE_INFO(rhelversion, "8.0");
