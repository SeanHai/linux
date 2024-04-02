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
	{ 0xa336c8ca, "hci_recv_diag" },
	{ 0xbf8ca43e, "usb_deregister" },
	{ 0x89d49eda, "usb_register_driver" },
	{ 0x34584d81, "hci_register_dev" },
	{ 0xf3ff96ef, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x3fa74627, "devm_kmalloc" },
	{ 0xcdebca32, "hci_recv_frame" },
	{ 0x61b90370, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb4b9a49, "skb_put" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x594363c5, "hci_set_fw_info" },
	{ 0xd7442057, "bt_info" },
	{ 0xdc2ac18b, "usb_unanchor_urb" },
	{ 0x47022514, "bt_err" },
	{ 0x83c06d1e, "usb_submit_urb" },
	{ 0x482f8924, "usb_anchor_urb" },
	{ 0xce935186, "kmem_cache_alloc_trace" },
	{ 0x31ee12ea, "kmalloc_caches" },
	{ 0xf00b771e, "usb_free_urb" },
	{ 0x5def83f9, "skb_push" },
	{ 0xe26cf5e3, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x6b3a6c0f, "__hci_cmd_sync" },
	{ 0x9b7fe4d4, "__dynamic_pr_debug" },
	{ 0xc5c92ee, "kfree_skb" },
	{ 0x962eeb53, "hci_free_dev" },
	{ 0xe10f17e, "hci_unregister_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "098B2E9D9D9FD9007D632A5");
MODULE_INFO(rhelversion, "8.0");
