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
	{ 0xe1a4f16a, "secure_ipv6_port_ephemeral" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xc4293794, "nf_nat_unregister_fn" },
	{ 0x2d0cbbcf, "nf_ct_nat_ext_add" },
	{ 0xfc33ccad, "dst_release" },
	{ 0xce04ef8f, "nf_nat_used_tuple" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0xbc50d97c, "nf_nat_l4proto_register" },
	{ 0xd1f0de11, "inet_proto_csum_replace4" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xb348a850, "ex_handler_refcount" },
	{ 0xe7486c43, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{  0x4447b, "inet_proto_csum_replace16" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x2d772e61, "skb_checksum" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xad408a10, "nf_nat_register_fn" },
	{ 0x84d2e8a7, "nf_nat_l4proto_nlattr_to_range" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0xd8197cd5, "ipv6_dev_get_saddr" },
	{ 0x9f23eb2e, "nf_nat_l4proto_unregister" },
	{ 0x4c0feb4e, "nf_xfrm_me_harder" },
	{ 0x1eb76e2a, "module_put" },
	{ 0xaacfe72f, "nf_nat_setup_info" },
	{ 0xde6bbe73, "ipv6_skip_exthdr" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6eab255b, "nf_ct_iterate_cleanup_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x8b12efd4, "ip6_route_me_harder" },
	{ 0x37a0cba, "kfree" },
	{ 0xf2a7675d, "skb_make_writable" },
	{ 0x121da905, "queue_work_on" },
	{ 0xa6979b81, "nf_nat_l3proto_unregister" },
	{ 0x6f0eaa96, "nf_nat_inet_fn" },
	{ 0x50dcca8c, "nf_nat_l3proto_register" },
	{ 0x4ecaf5ed, "__nf_nat_l4proto_find" },
	{ 0x1c1ac87c, "nf_ip6_checksum" },
	{ 0x85075cb1, "try_module_get" },
	{ 0xae12eeca, "nf_ct_invert_tuplepr" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "143539B98D1BD4641389C17");
MODULE_INFO(rhelversion, "8.0");
