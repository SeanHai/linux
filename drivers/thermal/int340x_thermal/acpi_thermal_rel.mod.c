#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x28cde093, "no_llseek" },
	{ 0x572e5012, "acpi_bus_get_device" },
	{ 0xad27f361, "__warn_printk" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x714889c4, "nonseekable_open" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x6bddef80, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x27e1a049, "printk" },
	{ 0x5f93525c, "acpi_extract_package" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xaebd12f0, "acpi_get_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xf49409b0, "misc_deregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x88db9f48, "__check_object_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76A92F723F8F7B7CCD96DE3");
MODULE_INFO(rhelversion, "8.0");
