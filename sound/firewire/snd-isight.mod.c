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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xddee6851, "fw_iso_resources_update" },
	{ 0x93ac2ae4, "driver_register" },
	{ 0x23fe151, "iso_packets_buffer_init" },
	{ 0x4ddbea71, "snd_pcm_period_elapsed" },
	{ 0x9f374bec, "fw_iso_resources_init" },
	{ 0xaa57b065, "snd_pcm_stop_xrun" },
	{ 0x4e94b037, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xa6093a32, "mutex_unlock" },
	{ 0xf54d4211, "snd_card_disconnect" },
	{ 0xf6e0d4e, "fw_iso_context_start" },
	{ 0x1cb03603, "fw_iso_context_queue_flush" },
	{ 0xfb578fc5, "memset" },
	{ 0xf9c388e5, "dev_err" },
	{ 0x9a76f11f, "__mutex_init" },
	{ 0xc351790f, "driver_unregister" },
	{ 0xf7c28002, "snd_card_free_when_closed" },
	{ 0x8185c800, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xd912e00f, "iso_packets_buffer_destroy" },
	{ 0x41aed6e7, "mutex_lock" },
	{ 0x32fbad1d, "snd_pcm_lib_ioctl" },
	{ 0xd3038457, "snd_ctl_boolean_mono_info" },
	{ 0x6c1eae2e, "snd_card_new" },
	{ 0x5c34167, "fw_iso_resources_destroy" },
	{ 0x8ee5612c, "fw_iso_context_queue" },
	{ 0xd0c86c05, "put_device" },
	{ 0x4ff23c91, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x2edbb2fe, "snd_ctl_new1" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b2afd3, "fw_iso_resources_allocate" },
	{ 0x85ffabba, "get_device" },
	{ 0xf15eb651, "fw_iso_context_stop" },
	{ 0xbd305a58, "fw_iso_context_create" },
	{ 0x69acdf38, "memcpy" },
	{ 0xba63db57, "snd_card_free" },
	{ 0x7e5cdd73, "snd_card_register" },
	{ 0x28318305, "snprintf" },
	{ 0xde20ea8, "snd_pcm_new" },
	{ 0xcb0e9def, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xae307d4b, "snd_ctl_add" },
	{ 0xa783ea7f, "snd_fw_transaction" },
	{ 0x22154282, "fw_iso_resources_free" },
	{ 0x994a4ced, "fw_iso_context_destroy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-firewire-lib,snd-pcm,snd";

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "EE035A93C16D3250FE9A2C1");
MODULE_INFO(rhelversion, "8.0");
