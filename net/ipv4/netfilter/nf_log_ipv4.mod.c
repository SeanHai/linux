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
	{ 0x4c6cec36, "nf_log_unregister" },
	{ 0xbb068623, "unregister_pernet_subsys" },
	{ 0x27e1a049, "printk" },
	{ 0xcc7ea00e, "nf_log_register" },
	{ 0xd45f511b, "register_pernet_subsys" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xfc8849af, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0xed946a48, "init_net" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0xcceab93f, "nf_log_dump_sk_uid_gid" },
	{ 0x34ed9b9, "nf_log_dump_udp_header" },
	{ 0x7a79fee5, "nf_log_dump_tcp_header" },
	{ 0x487c5d33, "nf_log_buf_add" },
	{ 0x317cc4af, "skb_copy_bits" },
	{ 0x17799a31, "nf_log_set" },
	{ 0x2722b8d9, "nf_log_unset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";


MODULE_INFO(srcversion, "709B6AC5BD666302EFADE62");
MODULE_INFO(rhelversion, "8.0");
