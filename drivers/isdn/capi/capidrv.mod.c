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
	{ 0xcb91d79a, "remove_proc_entry" },
	{ 0x1157f3c0, "proc_create_single_data" },
	{ 0x240decb7, "capi20_release" },
	{ 0x23359aff, "unregister_capictr_notifier" },
	{ 0xce1414b2, "register_capictr_notifier" },
	{ 0x30f114de, "capi20_register" },
	{ 0x6057c6f3, "capi_message2cmsg" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x7292ab34, "cdebbuf_free" },
	{ 0x72a25a72, "capi_cmsg2str" },
	{ 0xb19fda8d, "capi_cmd2str" },
	{ 0x4bbf47d3, "capi20_get_profile" },
	{ 0xfd304da, "register_isdn" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4cc8f9c8, "init_timer_key" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x91715312, "sprintf" },
	{ 0x754d539c, "strlen" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x9166fada, "strncpy" },
	{ 0x6fc65d87, "capi20_get_version" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x6be7a92b, "capi20_get_manufacturer" },
	{ 0x28985b9f, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xfa5223cc, "del_timer" },
	{ 0xc41033c1, "seq_printf" },
	{ 0x509f625d, "consume_skb" },
	{ 0x955c2e4e, "skb_pull" },
	{ 0xdd77d61b, "capi20_put_message" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5def83f9, "skb_push" },
	{ 0xab141891, "skb_realloc_headroom" },
	{ 0x50b33ca4, "capi_cmsg2message" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xb60e5e5f, "capi_cmsg_header" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7129e5f8, "hex_asc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,isdn";


MODULE_INFO(srcversion, "CD06732A6B06C1379B141DA");
MODULE_INFO(rhelversion, "8.0");
