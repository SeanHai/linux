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
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0xca1da9fc, "nft_unregister_expr" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0x5974243c, "nft_register_expr" },
	{ 0xd0a3cfe, "xt_request_find_match" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xca317631, "xt_request_find_target" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x27e1a049, "printk" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x402b8281, "__request_module" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x25b89fac, "xt_check_match" },
	{ 0x994ed72, "xt_check_target" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_tables";


MODULE_INFO(srcversion, "53EAB253E5B743B3B68488F");
MODULE_INFO(rhelversion, "8.0");
