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
	{ 0xfd1b0e53, "rtnl_link_unregister" },
	{ 0x163b1a0c, "rtnl_link_register" },
	{ 0xbd671048, "__alloc_percpu_gfp" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x3405637d, "netlink_add_tap" },
	{ 0x2a427458, "netlink_remove_tap" },
	{ 0x509f625d, "consume_skb" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa792fd7f, "cpumask_next" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a70864d, "__cpu_possible_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F037DFC5D0914D28944CDAE");
MODULE_INFO(rhelversion, "8.0");
