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
	{ 0x135d5c6a, "acpi_bus_register_driver" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x42c62921, "acpi_bus_unregister_driver" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xd70f62b6, "acpi_os_execute" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0x27e1a049, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x936c42d6, "acpi_ec_add_query_handler" },
	{ 0xe6478472, "_dev_info" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe3a88a43, "acpi_ec_remove_query_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc708f1fe, "ec_write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ACPI0001:*");
MODULE_ALIAS("acpi*:ACPI0005:*");

MODULE_INFO(srcversion, "CC897DCDF0B8ABC397671C1");
MODULE_INFO(rhelversion, "8.0");
