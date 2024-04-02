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
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x58388972, "pv_lock_ops" },
	{ 0x5e87e75, "device_destroy" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd1306c13, "blocking_notifier_chain_unregister" },
	{ 0x701843ca, "idr_destroy" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x84ffea8b, "idr_preload" },
	{ 0x2df52479, "device_create" },
	{ 0x787b953, "idr_alloc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x69ac23c0, "idr_remove" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xe8200fae, "blocking_notifier_call_chain" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67d83e37, "blocking_notifier_chain_register" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0xa047947, "class_destroy" },
	{ 0x6ecae48b, "device_unregister" },
	{ 0xce2ba1bd, "__class_create" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "70AE61E0A0CFDA9AA612BC2");
MODULE_INFO(rhelversion, "8.0");
