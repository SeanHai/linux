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
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0xfb166cb4, "param_ops_bool" },
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x10bce2f5, "rc_unregister_device" },
	{ 0xe45c1b14, "__release_region" },
	{ 0xd6b8e852, "request_threaded_irq" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0xbebb99e4, "rc_register_device" },
	{ 0xf9ffe550, "device_set_wakeup_enable" },
	{ 0x7a1144e8, "device_set_wakeup_capable" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a30f3c2, "rc_free_device" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0x963204a3, "rc_allocate_device" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x91620a5e, "ir_raw_event_store" },
	{ 0x96c3c8b, "ir_raw_event_store_with_filter" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0x84d0f2a7, "ir_raw_event_set_idle" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x29361773, "complete" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("pnp:dENE0100*");
MODULE_ALIAS("acpi*:ENE0100:*");
MODULE_ALIAS("pnp:dENE0200*");
MODULE_ALIAS("acpi*:ENE0200:*");
MODULE_ALIAS("pnp:dENE0201*");
MODULE_ALIAS("acpi*:ENE0201:*");
MODULE_ALIAS("pnp:dENE0202*");
MODULE_ALIAS("acpi*:ENE0202:*");

MODULE_INFO(srcversion, "BEB3335DBD7BE4A0B380DCF");
MODULE_INFO(rhelversion, "8.0");
