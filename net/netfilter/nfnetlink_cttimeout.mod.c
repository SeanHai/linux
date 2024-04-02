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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0x502b4d29, "nf_ct_timeout_put_hook" },
	{ 0xc31db35, "nf_ct_timeout_find_get_hook" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
	{ 0x754d539c, "strlen" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0xe914e41e, "strcpy" },
	{ 0xff243e7a, "nf_ct_l4proto_find_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x35eb5436, "nf_ct_unconfirmed_destroy" },
	{ 0x6eab255b, "nf_ct_iterate_cleanup_net" },
	{ 0xa0662783, "nf_ct_l4proto_put" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x56c8693b, "refcount_dec_if_one" },
	{ 0x85075cb1, "try_module_get" },
	{ 0x5a921311, "strncmp" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "19588F40066C726BF605D97");
MODULE_INFO(rhelversion, "8.0");
