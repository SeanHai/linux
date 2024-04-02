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
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0xf9c388e5, "dev_err" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0xe2cffb14, "acpi_walk_resources" },
	{ 0x6bddef80, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe6478472, "_dev_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:SMO8800:*");
MODULE_ALIAS("acpi*:SMO8801:*");
MODULE_ALIAS("acpi*:SMO8810:*");
MODULE_ALIAS("acpi*:SMO8811:*");
MODULE_ALIAS("acpi*:SMO8820:*");
MODULE_ALIAS("acpi*:SMO8821:*");
MODULE_ALIAS("acpi*:SMO8830:*");
MODULE_ALIAS("acpi*:SMO8831:*");

MODULE_INFO(srcversion, "1DD8044EF43B8F79BF0F056");
MODULE_INFO(rhelversion, "8.0");
