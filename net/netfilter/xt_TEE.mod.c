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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x8e91f949, "xt_unregister_targets" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x77a0f6e, "xt_register_targets" },
	{ 0xc9928d2a, "static_key_slow_inc" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xce2e9e1, "nf_dup_ipv4" },
	{ 0x76de290, "static_key_slow_dec" },
	{ 0x1a4c1f1a, "xt_tee_enabled" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xefc2d4eb, "nf_dup_ipv6" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_dup_ipv4,nf_dup_ipv6";


MODULE_INFO(srcversion, "7B8195D0965A657A70DC5E1");
MODULE_INFO(rhelversion, "8.0");
