/**
 * generated by Voice CodeGen Version: R1_v1.3.0
 * generated on: Wed Sep 21 21:11:40 IST 2016
 */

#include "v1/com/harman/audio/audioPresCtrl/audioPresCtrlDiagStubImpl.hpp"

namespace v1 {
namespace com {
namespace harman {
namespace audio {
namespace audioPresCtrl {

audioPresCtrlDiagStubImpl::audioPresCtrlDiagStubImpl()
{

}

audioPresCtrlDiagStubImpl::~audioPresCtrlDiagStubImpl()
{

}

void audioPresCtrlDiagStubImpl::TestSpeakerOn(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t speakerMask, std::string testToneName, float frequency, uint16_t volume, TestSpeakerOnReply_t reply)
{
	// TODO: Implement me
}

void audioPresCtrlDiagStubImpl::TestMultiSpeakersOff(const std::shared_ptr<CommonAPI::ClientId> _client, uint16_t speakerMask, TestMultiSpeakersOffReply_t reply)
{
	// TODO: Implement me
}

void audioPresCtrlDiagStubImpl::playSineTone(const std::shared_ptr<CommonAPI::ClientId> _client, ::v1::com::harman::audio::audioPresCtrl::audioPresCtrlTypes::eSampleRateType sampleRate, int16_t frequency, int16_t pauseTime, int16_t pulseTime, int16_t repeatCount, playSineToneReply_t reply)
{
	// TODO: Implement me
}

void audioPresCtrlDiagStubImpl::StopSineTone(const std::shared_ptr<CommonAPI::ClientId> _client, StopSineToneReply_t reply)
{
	// TODO: Implement me
}


} // namespace audioPresCtrl
} // namespace audio
} // namespace harman
} // namespace com
} // namespace v1

