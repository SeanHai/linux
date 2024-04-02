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
	{ 0xbadf500d, "pnp_unregister_driver" },
	{ 0x22c8110d, "pnp_register_driver" },
	{ 0xe6478472, "_dev_info" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x2ae2fdba, "dev_notice" },
	{ 0xe57587e0, "device_init_wakeup" },
	{ 0x5d2f1135, "device_create_file" },
	{ 0x25d35c2d, "devm_request_threaded_irq" },
	{ 0xeb411599, "__devm_request_region" },
	{ 0x44fefc0d, "devm_rc_register_device" },
	{ 0xd5c7e620, "pnp_get_resource" },
	{ 0x4c0d73c2, "pnp_activate_dev" },
	{ 0xb6a551a7, "devm_rc_allocate_device" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0x96c3c8b, "ir_raw_event_store_with_filter" },
	{ 0x534ad7af, "ir_raw_event_handle" },
	{ 0x91620a5e, "ir_raw_event_store" },
	{ 0xd7258a3c, "dev_warn" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6b8d353d, "device_remove_file" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xe45c1b14, "__release_region" },
	{ 0x5eba9410, "__request_region" },
	{ 0xca27d0c4, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0x247ddb61, "ir_raw_encode_scancode" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe0b13336, "argv_free" },
	{ 0xa46f2f1b, "kstrtouint" },
	{ 0x9ba7089d, "argv_split" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x28318305, "snprintf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x27e1a049, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("pnp:dWEC0530*");
MODULE_ALIAS("acpi*:WEC0530:*");
MODULE_ALIAS("pnp:dNTN0530*");
MODULE_ALIAS("acpi*:NTN0530:*");

MODULE_INFO(srcversion, "11D5B803314EC348709FB19");
MODULE_INFO(rhelversion, "8.0");
