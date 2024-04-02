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
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x27e1a049, "printk" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0x3ead91cf, "led_classdev_suspend" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x96c3c8b, "ir_raw_event_store_with_filter" },
	{ 0x677412db, "sev_enable_key" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eba9410, "__request_region" },
	{ 0x6c29e62, "__dynamic_dev_dbg" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0x16500d9a, "of_led_classdev_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0x59ddc0f9, "led_classdev_resume" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x84a914a7, "led_classdev_unregister" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91620a5e, "ir_raw_event_store" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("pnp:dWEC1022*");
MODULE_ALIAS("acpi*:WEC1022:*");

MODULE_INFO(srcversion, "4EDB0F7E22BA4B11C167053");
MODULE_INFO(rhelversion, "8.0");
