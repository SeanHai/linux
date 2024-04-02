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
	{ 0xb9338741, "kmem_cache_destroy" },
	{ 0x407482f9, "can_rx_register" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x8c24bd72, "skb_clone" },
	{ 0xa816dfec, "skb_copy" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xad27f361, "__warn_printk" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x5b5a9263, "skb_trim" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0xcfba08a1, "rtnl_register_module" },
	{ 0x27e1a049, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfdc1bd61, "nla_put" },
	{ 0x8a7de935, "kmem_cache_free" },
	{ 0xeb84d26a, "__dev_get_by_index" },
	{ 0xadc31089, "can_send" },
	{ 0x2b63e7fc, "kmem_cache_alloc" },
	{ 0x3556424b, "netlink_capable" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x43dae11a, "nla_parse" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8678453c, "kmem_cache_create" },
	{ 0x579e0bf5, "rtnl_unregister_all" },
	{ 0x22805e47, "can_rx_unregister" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x8f648a94, "param_ops_uint" },
	{ 0xa005abe, "__nlmsg_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "0362AE05D1C2914FC38B478");
MODULE_INFO(rhelversion, "8.0");
