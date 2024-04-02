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
	{ 0x754d539c, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x56c8693b, "refcount_dec_if_one" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x6ccf6eb0, "netlink_broadcast" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "7BB34744A231218A9615EEB");
MODULE_INFO(rhelversion, "8.0");
