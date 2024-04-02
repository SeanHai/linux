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
	{ 0x8f648a94, "param_ops_uint" },
	{ 0x15a89a18, "parport_unregister_driver" },
	{ 0x56e402f9, "__parport_register_driver" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x97ab9ad3, "pv_irq_ops" },
	{ 0x1db6fe64, "pps_event" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xdafcdc3a, "ktime_get_snapshot" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x27e1a049, "printk" },
	{ 0xf54ba6f6, "pps_register_source" },
	{ 0x97c3aef6, "parport_claim_or_block" },
	{ 0x9be4fb1a, "parport_register_dev_model" },
	{ 0x5802f531, "ida_simple_get" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x99096e86, "ida_simple_remove" },
	{ 0xe310d55, "parport_unregister_device" },
	{ 0xaff99d8e, "parport_release" },
	{ 0x87b45dcc, "pps_unregister_source" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";


MODULE_INFO(srcversion, "BD5585B0EC617B5B76AA0B1");
MODULE_INFO(rhelversion, "8.0");
