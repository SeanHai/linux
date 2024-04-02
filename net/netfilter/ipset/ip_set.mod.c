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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x402b8281, "__request_module" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xcdd58a4e, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xa8d7ed7a, "nfnetlink_subsys_unregister" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x27e1a049, "printk" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe1537255, "__list_del_entry_valid" },
	{ 0x9c8d6db8, "ns_capable" },
	{ 0x9166fada, "strncpy" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x7d3c241f, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x68f31cbd, "__list_add_valid" },
	{ 0x1eb76e2a, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xa9d22b83, "nf_unregister_sockopt" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1c778bab, "netlink_ack" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x2cbc012a, "nfnetlink_subsys_register" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xdf40da5f, "nla_put_64bit" },
	{ 0xa53d8849, "nf_register_sockopt" },
	{ 0x362ef408, "_copy_from_user" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xfe3ac6f4, "__netlink_dump_start" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "C10A3BE5FFD1771CC33A0F7");
MODULE_INFO(rhelversion, "8.0");
